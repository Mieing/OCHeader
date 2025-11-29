@class NSString, NSArray;

@interface WCCardDetailInfo : MMObject

@property (retain, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSString *detailDesc;
@property (retain, nonatomic) NSArray *detailImgList;
@property (retain, nonatomic) NSString *detailAdTitle;

- (void).cxx_destruct;

@end
