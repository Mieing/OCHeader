@class NSString, ToygerUploadContent;

@interface APBBisUploadGwRequest : NSObject

@property (retain, nonatomic) NSString *bisToken;
@property (retain, nonatomic) ToygerUploadContent *content;
@property (retain, nonatomic) NSString *contentSig;
@property (retain, nonatomic) NSString *behavLog;
@property (retain, nonatomic) NSString *behavLogSig;

- (void).cxx_destruct;

@end
