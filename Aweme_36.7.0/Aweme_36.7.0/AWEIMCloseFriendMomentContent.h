@class NSString, NSDictionary, AWEURLModel;

@interface AWEIMCloseFriendMomentContent : NSObject <NSCopying>

@property (copy, nonatomic) NSString *uidString;
@property (copy, nonatomic) NSString *secUidString;
@property (copy, nonatomic) NSString *itemIDString;
@property (nonatomic) unsigned long long coverHeight;
@property (nonatomic) unsigned long long coverWidth;
@property (nonatomic) long long publishTime;
@property (retain, nonatomic) AWEURLModel *coverUrlModel;
@property (nonatomic) long long aweType;
@property (nonatomic) unsigned long long nowPostType;
@property (copy, nonatomic) NSString *contentName;
@property (copy, nonatomic) NSDictionary *extra;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (BOOL)isAudioNotes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNotes;

@end
