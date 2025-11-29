@class NSString;

@interface TPMediaRecord : NSObject

@property (nonatomic) unsigned long long downloadType;
@property (retain, nonatomic) NSString *mediaResolution;
@property (nonatomic) long long mediaRate;
@property (nonatomic) long long mediaDurationMs;
@property (nonatomic) BOOL isMultiTrack;
@property (nonatomic) BOOL selectedSubtitle;

- (void).cxx_destruct;

@end
