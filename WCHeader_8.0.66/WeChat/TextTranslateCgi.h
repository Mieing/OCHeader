@class NSString;

@interface TextTranslateCgi : NSObject <PBMessageObserverDelegate>

@property (retain, nonatomic) NSString *originText;
@property (nonatomic) unsigned int requestID;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) int scene;

- (id)initWithText:(id)a0;
- (void)startTranslate:(id /* block */)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
