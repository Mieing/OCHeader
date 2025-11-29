@class NSString, NSMutableArray;

@interface WCNewYearHBDetailDataForSns : NSObject

@property (nonatomic) int hbType;
@property (nonatomic) int coverType;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int hbSendID;
@property (nonatomic) unsigned long long money;
@property (retain, nonatomic) NSString *praise;
@property (retain, nonatomic) NSMutableArray *arrRewardItem;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;

- (void).cxx_destruct;

@end
