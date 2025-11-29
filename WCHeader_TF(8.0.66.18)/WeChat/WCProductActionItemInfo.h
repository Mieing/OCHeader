@class NSString, NSArray;

@interface WCProductActionItemInfo : NSObject

@property (nonatomic) BOOL isPopUp;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSArray *imageUrlList;
@property (nonatomic) unsigned int index;

- (void).cxx_destruct;

@end
