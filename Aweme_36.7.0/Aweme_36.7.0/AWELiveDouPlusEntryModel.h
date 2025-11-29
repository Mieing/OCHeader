@class NSString;

@interface AWELiveDouPlusEntryModel : AWEBaseApiModel

@property (nonatomic) BOOL enableShowDouPlus;
@property (nonatomic) BOOL enableShowLocalPromotion;
@property (retain, nonatomic) NSString *douPlusURL;

- (id)initWithEnableShowDouPlus:(BOOL)a0 andDouPlusURL:(id)a1;
- (void).cxx_destruct;

@end
