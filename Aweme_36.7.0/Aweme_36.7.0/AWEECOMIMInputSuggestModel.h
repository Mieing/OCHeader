@class NSDictionary, NSAttributedString;

@interface AWEECOMIMInputSuggestModel : NSObject

@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSAttributedString *suggestText;

+ (void)fetchInputSuggestDataWithInputText:(id)a0 shopID:(id)a1 requestCommonParams:(id)a2 networkImp:(id)a3 completion:(id /* block */)a4;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
