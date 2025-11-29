@class NSString;

@interface BDTuringSMSVerifyModel : BDTuringVerifyModel

@property (copy, nonatomic) NSString *scene;

+ (id)modelWithScene:(id)a0;

- (id)createVerifyView;
- (void)appendCommonKVParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
