@class BaseRequest, NSString, NSMutableArray;

@interface UploadMContactRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) int opcode;
@property (retain, nonatomic) NSString *mobile;
@property (nonatomic) int mobileListSize;
@property (retain, nonatomic) NSMutableArray *mobileList;
@property (nonatomic) int emailListSize;
@property (retain, nonatomic) NSMutableArray *emailList;

+ (void)initialize;

@end
