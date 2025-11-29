@class NSString, NSData;

@interface SAMICore_TtsResult : NSObject

@property (nonatomic) float duration;
@property (retain, nonatomic) NSString *phonemeAlignment;
@property (retain, nonatomic) NSString *wordAlignment;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) int dataLength;

@end
