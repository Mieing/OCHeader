@class NSArray, NSString, UTType, CMessageWrap;

@interface MMFileItemProvider : NSObject <NSItemProviderWriting>

@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (retain, nonatomic) UTType *type;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
