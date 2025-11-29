@class NSMutableDictionary, IESGCPLogScene;

@interface IESGCPExtraMaker : NSObject {
    NSMutableDictionary *_extraDict;
}

@property (nonatomic) long long eventStatus;
@property (retain, nonatomic) IESGCPLogScene *scene;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
