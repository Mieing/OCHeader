@class NSString, NSIndexPath;
@protocol AWEIMShareModelProtocol;

@interface AWEIMShareMoreSelectionIdentifier : NSObject <AWEIMShareMoreSelectionIdentifier>

@property (copy, nonatomic) NSString *contactPicker_identifier;
@property (nonatomic) long long moduleType;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShareModel:(id)a0 moduleType:(long long)a1 indexPath:(id)a2;
- (void).cxx_destruct;

@end
