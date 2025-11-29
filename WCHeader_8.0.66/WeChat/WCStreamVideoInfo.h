@class NSString;

@interface WCStreamVideoInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *streamVideoUrl;
@property (retain, nonatomic) NSString *streamVideoTitle;
@property (retain, nonatomic) NSString *streamVideoWording;
@property (retain, nonatomic) NSString *streamVideoWebUrl;
@property (nonatomic) unsigned int uiStreamVideoTime;
@property (retain, nonatomic) NSString *streamVideoThumbUrl;
@property (retain, nonatomic) NSString *streamVideoPublishId;
@property (retain, nonatomic) NSString *streamVideoAdUxInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_streamVideoUrl;
+ (void)PBArrayAdd_streamVideoTitle;
+ (void)PBArrayAdd_streamVideoWording;
+ (void)PBArrayAdd_streamVideoWebUrl;
+ (void)PBArrayAdd_uiStreamVideoTime;
+ (void)PBArrayAdd_streamVideoThumbUrl;
+ (void)PBArrayAdd_streamVideoPublishId;
+ (void)PBArrayAdd_streamVideoAdUxInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
