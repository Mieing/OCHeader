@class NSString, NSArray;

@interface MMFinderLiveFloatMsgDecorationInfo : NSObject

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long priceInWecoin;
@property (retain, nonatomic) NSArray *wordColors;
@property (retain, nonatomic) NSArray *borderColors;
@property (nonatomic) unsigned int decorationLevel;
@property (retain, nonatomic) NSArray *decorationItems;

- (BOOL)readyForDisplay;
- (void).cxx_destruct;

@end
