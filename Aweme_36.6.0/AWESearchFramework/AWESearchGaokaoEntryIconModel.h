@class UIImage, NSString;

@interface AWESearchGaokaoEntryIconModel : NSObject <NSCoding>

@property (retain, nonatomic) UIImage *expandedDarkIcon;
@property (retain, nonatomic) NSString *expandedDarkIconURL;
@property (retain, nonatomic) UIImage *expandedLightIcon;
@property (retain, nonatomic) NSString *expandedLightIconURL;
@property (retain, nonatomic) UIImage *foldedDarkIcon;
@property (retain, nonatomic) NSString *foldedDarkIconURL;
@property (retain, nonatomic) UIImage *foldedLightIcon;
@property (retain, nonatomic) NSString *foldedLightIconURL;

- (BOOL)isValidModel;
- (void).cxx_destruct;
- (BOOL)isEqualToModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
