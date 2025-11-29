@class NSArray, NSData, NSString;

@interface MMDropDocumentItem : NSObject <NSItemProviderReading>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;

@property (retain, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)initWithData:(id)a0 typeIdentifier:(id)a1;
- (void).cxx_destruct;

@end
