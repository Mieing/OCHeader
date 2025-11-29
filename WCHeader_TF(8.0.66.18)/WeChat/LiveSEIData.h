@class NSData, LiveKTVSEIData;

@interface LiveSEIData : WXPBGeneratedMessage

@property (nonatomic) long long wxT;
@property (retain, nonatomic) NSData *maskData;
@property (nonatomic) BOOL personEmpty;
@property (nonatomic) unsigned int useClientMask;
@property (retain, nonatomic) LiveKTVSEIData *ktvSeiData;

+ (void)initialize;

@end
