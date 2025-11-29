@class NSString;

@interface MMLiveReplayFragmentItem : NSObject <WCPlayerMediaExt>

@property (nonatomic) long long beginOffsetSeconds;
@property (nonatomic) long long endOffsetSeconds;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSString *uniqId;
@property (copy, nonatomic) NSString *sliceMp4Url;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long duration;
@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSString *md5sum;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) NSString *liveId;
@property (copy, nonatomic) NSString *finderObjectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLiveReplayFragmentTempDirectory;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (void).cxx_destruct;

@end
