@class NSString, AWEIMPoiItem;

@interface AWEIMShareLocationSearchItem : NSObject

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *locationAddress;
@property (retain, nonatomic) AWEIMPoiItem *poi;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL hasTracked;

- (void).cxx_destruct;

@end
