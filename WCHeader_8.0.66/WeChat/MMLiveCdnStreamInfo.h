@class NSNumber, CdnTransInfo, NSString;

@interface MMLiveCdnStreamInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *streamKey;
@property (retain, nonatomic) CdnTransInfo *cdnTransInfo;
@property (copy, nonatomic) NSString *streamUrl;
@property (nonatomic) BOOL isDisplayedStream;
@property (nonatomic) BOOL isMainStreamInvalidFromServer;
@property (nonatomic) BOOL hasChangedToBackStream;
@property (readonly, nonatomic) BOOL hasBackUrl;

+ (id)liveCdnStreamInfoFromCdnTransInfo:(id)a0 withKey:(id)a1 andQualityTagItem:(id)a2;
+ (id)liveCdnStreamInfoFromUrl:(id)a0 withKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetAllData;
- (void)updateAndResetDataWithCdnTransInfo:(id)a0 andQualityTagItem:(id)a1;
- (void)updateAndResetDataWithUrl:(id)a0;
- (id)getLiveUrl;
- (void)updateWithMainBlockFlag:(unsigned int)a0;
- (BOOL)isSameLiveUrlWithStreamId:(id)a0;
- (BOOL)isEqualToStreamInfo:(id)a0;
- (void).cxx_destruct;

@end
