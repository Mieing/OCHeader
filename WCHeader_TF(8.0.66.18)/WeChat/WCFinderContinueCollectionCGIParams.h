@class NSData;

@interface WCFinderContinueCollectionCGIParams : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *pageBuffer;

+ (id)paramsWithScene:(int)a0;

- (void).cxx_destruct;

@end
