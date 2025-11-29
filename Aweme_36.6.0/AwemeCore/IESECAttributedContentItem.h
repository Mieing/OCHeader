@class NSDictionary, NSAttributedString;

@interface IESECAttributedContentItem : NSObject

@property (copy, nonatomic) id /* block */ asyncMakeBlock;
@property (copy, nonatomic) NSAttributedString *text;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *additionalAttributes;
@property (copy, nonatomic) NSDictionary *attributes;

+ (id)itemWithAsyncMakeBlock:(id /* block */)a0 placeHolderContent:(id)a1;
+ (id)itemWithContent:(id)a0;

- (void)asyncMakeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
