@class NSString;

@interface TPDashFormat : NSObject

@property (copy, nonatomic) NSString *representationId;
@property (copy, nonatomic) NSString *codecs;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int bandwidth;
@property (nonatomic) int audioChannels;
@property (nonatomic) int audioSamplingRate;
@property (nonatomic) float frameRate;

- (id)init;
- (void).cxx_destruct;

@end
