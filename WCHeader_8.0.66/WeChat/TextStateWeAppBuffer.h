@class NSString, NSDictionary;

@interface TextStateWeAppBuffer : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSString *headImageURL;
@property (retain, nonatomic) NSDictionary *extraData;

- (id)initWithJumpInfo:(id)a0;
- (id)weAppJumpInfo;
- (void).cxx_destruct;

@end
