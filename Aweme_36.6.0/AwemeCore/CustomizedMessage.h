@class NSString;

@interface CustomizedMessage : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *data;
@property (nonatomic) int mark;

- (void).cxx_destruct;

@end
