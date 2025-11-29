@class NSMutableArray, BaseResponse;

@interface SnsObjectOpResponse : WXPBGeneratedMessage {
    int opRetListMemoizedSerializedSize;
}

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int opCount;
@property (retain, nonatomic) NSMutableArray *opRetList;
@property (nonatomic) unsigned int updateYearMonthInfo;
@property (nonatomic) unsigned int yearMonthInfoCount;
@property (retain, nonatomic) NSMutableArray *yearMonthInfoList;

+ (void)initialize;

@end
