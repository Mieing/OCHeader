@class NSString, NSMutableDictionary;

@interface IESLatchPageListConfigResolver : NSObject <IESLatchConfigResolver>

@property (retain, nonatomic) NSMutableDictionary *resolveErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveConfig:(id)a0 bag:(id)a1 withEvent:(id)a2;
- (void).cxx_destruct;

@end
