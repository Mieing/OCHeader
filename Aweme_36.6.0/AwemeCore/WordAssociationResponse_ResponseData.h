@class NSString, NSMutableDictionary, NSMutableArray;

@interface WordAssociationResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (retain, nonatomic) NSMutableArray *resultsArray;
@property (readonly, nonatomic) unsigned long long resultsArray_Count;
@property (nonatomic) long long associationId;
@property (copy, nonatomic) NSString *associationIdStr;

+ (id)descriptor;

@end
