@class NSArray, NSString;

@interface MMTextItemProvider : NSObject <NSItemProviderWriting>

@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (retain, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContent:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
