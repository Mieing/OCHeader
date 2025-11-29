@class NSNumber, NSString;

@interface BDECPigeonMessagesDataSourceOptions : NSObject

@property (retain, nonatomic) NSNumber *initialMessageCount;
@property (retain, nonatomic) NSNumber *messageCountPerPage;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (nonatomic) int inbox;

- (void).cxx_destruct;
- (id)init;

@end
