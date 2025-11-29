@class NSDictionary, NSDate;

@interface AWEGeneralPopupRecord : NSObject

@property (retain, nonatomic) NSDate *lastShownDate;
@property (nonatomic) long long numberOfTimesShown;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
