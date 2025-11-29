@class NSString, NSDictionary;

@interface WCPlayerDownloadInfo : NSObject

@property (nonatomic) unsigned long long mdatLen;
@property (retain, nonatomic) NSString *boxsDescription;
@property (nonatomic) unsigned int moovState;
@property (nonatomic) unsigned long long moovPos;
@property (nonatomic) unsigned long long moovLen;
@property (retain, nonatomic) NSString *svrFlag;
@property (nonatomic) unsigned long long totalLen;
@property (nonatomic) unsigned long long currentCompletedSize;
@property (nonatomic) unsigned long long previousCompletedSize;
@property (nonatomic) double duration;
@property (nonatomic) double currentPlayable;
@property (nonatomic) double previousPlayable;
@property (retain, nonatomic) NSDictionary *dicVideoBoxs;

- (id)init;
- (double)getPlayableWithDataLen:(unsigned long long)a0;
- (unsigned long long)getExtraLengthWithTime:(double)a0;
- (void).cxx_destruct;

@end
