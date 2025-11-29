@class NSString, CMessageWrap;

@interface BypEmoticonUploadInfo : NSObject

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int totalLen;
@property (retain, nonatomic) CMessageWrap *wrapMsg;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
