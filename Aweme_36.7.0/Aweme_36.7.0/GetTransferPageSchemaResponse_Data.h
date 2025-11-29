@class NSString;

@interface GetTransferPageSchemaResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *transferPageSchema;
@property (nonatomic) int containerType;

+ (id)descriptor;

@end
