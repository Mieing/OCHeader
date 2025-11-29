@class BaseRequest, NSString, NSMutableArray;

@interface GeneralSetRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int setType;
@property (retain, nonatomic) NSString *setValue;
@property (nonatomic) unsigned int ticketCount;
@property (retain, nonatomic) NSMutableArray *tickets;

+ (void)initialize;

@end
