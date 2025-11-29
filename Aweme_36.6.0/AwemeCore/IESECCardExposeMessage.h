@class NSString;

@interface IESECCardExposeMessage : NSObject

@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) double exposureTime;

- (id)initWithCardID:(id)a0;
- (void).cxx_destruct;

@end
