@class NSNumber, NSString, NSDictionary;

@interface AWEFormatRoomModel : NSObject

@property (retain, nonatomic) NSNumber *formatId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSNumber *imBotId;
@property (copy, nonatomic) NSDictionary *pageConfigParams;
@property (copy, nonatomic) NSDictionary *contextParams;

- (void).cxx_destruct;

@end
