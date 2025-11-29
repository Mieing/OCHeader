@class NSString;

@interface OMJResourceItem : NSObject

@property (readonly, nonatomic) NSString *templateID;
@property (readonly, nonatomic) NSString *musicID;

- (id)initWithTemplateID:(id)a0;
- (id)initWithMusicID:(id)a0;
- (id)initWithTemplateID:(id)a0 musicID:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
