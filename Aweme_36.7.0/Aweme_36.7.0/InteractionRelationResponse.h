@class InteractionRelationResponse_ResponseData;

@interface InteractionRelationResponse : IESLivePBBaseMessage

@property (retain, nonatomic) InteractionRelationResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
