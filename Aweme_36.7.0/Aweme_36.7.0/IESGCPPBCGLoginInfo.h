@class NSMutableArray, IESGCPPBJumpTxInfo;

@interface IESGCPPBCGLoginInfo : GPBMessage

@property (retain, nonatomic) NSMutableArray *txLoginSchemaArray;
@property (readonly, nonatomic) unsigned long long txLoginSchemaArray_Count;
@property (retain, nonatomic) IESGCPPBJumpTxInfo *txRealNameSchema;
@property (nonatomic) BOOL hasTxRealNameSchema;

+ (id)descriptor;

@end
