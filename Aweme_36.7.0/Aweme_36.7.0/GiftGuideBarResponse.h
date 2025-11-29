@class GiftGuideBarResponse_Data;

@interface GiftGuideBarResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GiftGuideBarResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
