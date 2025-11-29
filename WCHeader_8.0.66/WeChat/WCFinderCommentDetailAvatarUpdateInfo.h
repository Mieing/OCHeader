@class NSString;

@interface WCFinderCommentDetailAvatarUpdateInfo : NSObject

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long imageDisplayStyle;

- (id)initWithUrl:(id)a0 nickname:(id)a1 type:(unsigned long long)a2 imageDisplayStyle:(unsigned long long)a3;
- (void).cxx_destruct;

@end
