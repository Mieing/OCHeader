@class LiveSdkInfo, FinderLiveCoverInfo, NSMutableArray, FinderLiveSdkChannelInfo;

@interface WCFinderLiveShareExtraCodingInfo : NSObject <NSCoding>

@property (retain, nonatomic) LiveSdkInfo *liveSdkInfo;
@property (retain, nonatomic) FinderLiveCoverInfo *coverInfo;
@property (retain, nonatomic) FinderLiveSdkChannelInfo *liveSdkChannelInfo;
@property (retain, nonatomic) NSMutableArray *entranceAdInfos;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
