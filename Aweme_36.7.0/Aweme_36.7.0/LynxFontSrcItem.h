@class NSString, NSPointerArray;

@interface LynxFontSrcItem : NSObject

@property (nonatomic) unsigned long long type;
@property (retain) NSString *src;
@property (retain) NSString *dataFontName;
@property (retain, nonatomic) NSPointerArray *notifierArray;

- (void).cxx_destruct;

@end
