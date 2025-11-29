@class NSString, NSURL, UIImage;

@interface MJDecorPackageItem : NSObject

@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) UIImage *icon;

- (id)initWithIdentifier:(id)a0 displayName:(id)a1 iconURL:(id)a2 status:(unsigned long long)a3;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 icon:(id)a2 status:(unsigned long long)a3;
- (void)updateStatus:(unsigned long long)a0;
- (void).cxx_destruct;

@end
