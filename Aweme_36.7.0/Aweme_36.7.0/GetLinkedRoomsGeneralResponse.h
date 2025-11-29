@class LinkedRoomsV2Data;

@interface GetLinkedRoomsGeneralResponse : IESLivePBBaseMessage

@property (retain, nonatomic) LinkedRoomsV2Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
