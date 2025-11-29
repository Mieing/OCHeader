@class ViewInfo;

@interface CreateViewResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) ViewInfo *view;
@property (nonatomic) BOOL hasView;

+ (id)descriptor;

@end
