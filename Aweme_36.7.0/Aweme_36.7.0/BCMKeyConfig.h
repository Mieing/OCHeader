@class NSString, NSObject;
@protocol BCMFormatter;

@interface BCMKeyConfig : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSObject<BCMFormatter> *formatter;
@property (readonly, nonatomic) BOOL inChain;
@property (nonatomic) BOOL inEvent;

- (void).cxx_destruct;
- (id)init;

@end
