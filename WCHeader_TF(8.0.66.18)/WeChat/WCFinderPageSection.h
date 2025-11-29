@class NSData, NSArray;

@interface WCFinderPageSection : NSObject

@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSArray *dataItems;

- (void).cxx_destruct;

@end
