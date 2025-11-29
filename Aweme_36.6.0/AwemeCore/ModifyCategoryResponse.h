@class ModifyCategoryResponse_CategoryNode;

@interface ModifyCategoryResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ModifyCategoryResponse_CategoryNode *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
