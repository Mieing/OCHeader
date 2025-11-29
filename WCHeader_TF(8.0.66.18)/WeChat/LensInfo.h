@class NSString, PersonalDesigner, LensIcon, LensPackage;

@interface LensInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) LensIcon *icon;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) PersonalDesigner *designer;
@property (retain, nonatomic) LensPackage *package;

+ (void)initialize;

@end
