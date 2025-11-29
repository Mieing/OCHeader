@class NSString;

@interface MMReaderPubliserInfo : NSObject <NSCopying>

@property (nonatomic) BOOL showFollowButton;
@property (nonatomic) unsigned int headType;
@property (retain, nonatomic) NSString *headImg;
@property (nonatomic) unsigned int nicknameType;
@property (retain, nonatomic) NSString *nickname;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
