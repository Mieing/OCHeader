@class AWEIMSkylightBizInfoDataModel, NSString;

@interface AWEIMSkylightBusinessSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long vmType;
@property (retain, nonatomic) AWEIMSkylightBizInfoDataModel *businessModel;
@property (copy, nonatomic) NSString *selfAvatarUrl;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasEverPressed;

- (id)transformToViewModel;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
