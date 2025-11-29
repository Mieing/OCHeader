@class NSData, NSString, WCFinderBgmListOptionalParams;

@interface WCFinderBgmListParams : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long requireMusicCount;
@property (copy, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned long long videoDuration;
@property (retain, nonatomic) WCFinderBgmListOptionalParams *optionalParams;
@property (copy, nonatomic) NSString *query;

- (id)init;
- (void).cxx_destruct;

@end
