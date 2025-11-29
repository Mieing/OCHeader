@class NSString;

@interface RelaxFramework.ExposureEventDetail : NSObject {
    void /* function */ exposureID;
    void /* function */ exposureScene;
}

@property (nonatomic) int sign;
@property (nonatomic, copy) NSString *exposureID;
@property (nonatomic, copy) NSString *exposureScene;

- (void).cxx_destruct;
- (id)init;

@end
