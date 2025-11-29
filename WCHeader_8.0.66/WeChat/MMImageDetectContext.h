@class NSString, WCMediaItem, CMessageWrap, MMImageDetectMediaInfo;

@interface MMImageDetectContext : NSObject

@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int svrScene;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) WCMediaItem *snsMediaItem;
@property (retain, nonatomic) NSString *imageFilePath;
@property (retain, nonatomic) MMImageDetectMediaInfo *detectMediaInfo;

- (id)init;
- (id)generateImageInfoList:(id)a0;
- (void).cxx_destruct;

@end
