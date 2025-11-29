@class NSString, NSURL, UIImage;

@interface MJVoiceItem : NSObject

@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSString *roleName;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) BOOL iconClipsToBounds;

- (id)initWithType:(unsigned long long)a0 roleID:(id)a1 roleName:(id)a2 iconURL:(id)a3 iconClipsToBounds:(BOOL)a4 status:(unsigned long long)a5;
- (id)initWithType:(unsigned long long)a0 roleID:(id)a1 roleName:(id)a2 icon:(id)a3 iconClipsToBounds:(BOOL)a4 status:(unsigned long long)a5;
- (void)updateStatus:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
